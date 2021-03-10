package cz.matee.devstack.kmp.shared.domain.usecase.user

import cz.matee.devstack.kmp.shared.base.Result
import cz.matee.devstack.kmp.shared.base.usecase.UseCaseFlowResultNoParams
import cz.matee.devstack.kmp.shared.domain.model.User
import cz.matee.devstack.kmp.shared.domain.repository.UserRepository
import kotlinx.coroutines.flow.Flow

class GetLoggedInUserUseCase(
    private val userRepository: UserRepository
) : UseCaseFlowResultNoParams<User>() {
    override suspend fun doWork(params: Unit): Flow<Result<User>> = userRepository.getUser()
}