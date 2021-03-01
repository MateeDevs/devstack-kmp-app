package cz.matee.devstack.kmp.shared.domain.usecase

import cz.matee.devstack.kmp.shared.base.Result
import cz.matee.devstack.kmp.shared.base.usecase.UseCaseFlowResultNoParams
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOf
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.onEach

class GetDummyFlowUseCase : UseCaseFlowResultNoParams<String>() {
    override suspend fun doWork(params: Unit): Flow<Result<String>> {
        return flowOf("1", "2", "3", "4", "5").onEach { delay(1000) }.map { Result.Success(it) }
    }
}