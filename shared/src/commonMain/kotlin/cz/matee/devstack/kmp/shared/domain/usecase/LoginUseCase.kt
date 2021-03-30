package cz.matee.devstack.kmp.shared.domain.usecase

import cz.matee.devstack.kmp.shared.base.Result
import cz.matee.devstack.kmp.shared.base.usecase.UseCaseResult
import cz.matee.devstack.kmp.shared.base.usecase.UseCaseResultInterface
import cz.matee.devstack.kmp.shared.domain.repository.AuthRepository

//interface UseCaseInterface<Params, T>{
//    suspend operator fun invoke(params: Params): T
//}
//
//interface UseCaseResultInterface<Params,T : Any>{
//    suspend operator fun invoke(params: Params): Result<T>
//}


interface LoginUseCaseI : UseCaseResultInterface<LoginUseCase.Params, Unit>

class LoginUseCase internal constructor(
    private val authRepository: AuthRepository
) : UseCaseResult<LoginUseCase.Params, Unit>(), LoginUseCaseI {
    data class Params(val email: String, val password: String)

    override suspend fun doWork(params: Params): Result<Unit> =
        authRepository.login(params.email, params.password)
}