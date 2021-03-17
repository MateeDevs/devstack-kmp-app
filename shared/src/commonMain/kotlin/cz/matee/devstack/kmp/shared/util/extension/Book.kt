package cz.matee.devstack.kmp.shared.util.extension

import cz.matee.devstack.kmp.shared.domain.model.Book
import cz.matee.devstack.kmp.shared.infrastructure.local.BookEntity

val BookEntity.asDomain
    get() = Book(id, name, author ?: "", pageCount ?: 0)
