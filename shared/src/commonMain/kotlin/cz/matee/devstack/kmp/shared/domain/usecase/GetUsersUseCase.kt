package cz.matee.devstack.kmp.shared.domain.usecase

import cz.matee.devstack.kmp.shared.base.usecase.UseCaseFlowNoParams
import cz.matee.devstack.kmp.shared.domain.model.User
import cz.matee.devstack.kmp.shared.domain.repository.UserRepository
import kotlinx.coroutines.flow.Flow

class GetUsersUseCase(private val repository: UserRepository) : UseCaseFlowNoParams<List<User>>() {
    override suspend fun doWork(params: Unit): Flow<List<User>> = repository.getUsers()
}