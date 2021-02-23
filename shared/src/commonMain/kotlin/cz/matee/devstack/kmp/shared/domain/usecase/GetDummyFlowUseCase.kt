package cz.matee.devstack.kmp.shared.domain.usecase

import cz.matee.devstack.kmp.shared.base.Result
import cz.matee.devstack.kmp.shared.base.usecase.UseCaseFlowResultNoParams
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

class GetDummyFlowUseCase : UseCaseFlowResultNoParams<String>() {
    override suspend fun doWork(params: Unit): Flow<Result<String>> {
        return flow {
            listOf("1", "2", "3", "4", "5").forEach {
                delay(1)
                emit(Result.Success(it))
            }
        }

    }
}