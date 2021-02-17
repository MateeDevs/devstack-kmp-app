package cz.matee.devstack.kmp.android.shared.base.error

import android.content.Context
import cz.matee.devstack.kmp.android.shared.R
import cz.matee.devstack.kmp.shared.base.ErrorResult
import cz.matee.devstack.kmp.shared.base.error.ErrorMessageProvider
import cz.matee.devstack.kmp.shared.base.error.domain.AuthError
import cz.matee.devstack.kmp.shared.base.error.domain.BackendError
import cz.matee.devstack.kmp.shared.base.error.domain.CommonError

class ErrorMessageProviderImpl(private val context: Context) : ErrorMessageProvider {
    override val defaultMessage: String
        get() = context.getString(R.string.unknown_error)

    override fun ErrorResult.getMessage(defMessage: String): String =
        when (this) {
            is AuthError -> errorMessage
            else -> defMessage
        }


    private val AuthError.errorMessage: String
        get() = context.getString(
            when (this) {
                is AuthError.InvalidLoginCredentials -> R.string.login_view_error_invalid_credentials
                is AuthError.EmailAlreadyExist -> R.string.register_view_email_already_exists
            }
        )

    private val BackendError.errorMessage: String
        get() = when (this) {
            is BackendError.NotAuthorized -> "NotAuthorized - TODO" // TODO authorized error handling/message
        }

    private val CommonError.errorMessage: String
        get() =
            when (this) {
                is CommonError.NoNetworkConnection -> context.getString(R.string.error_no_internet_connection)
                CommonError.NoUserLoggedIn -> "No user logged in - TODO" // TODO no user logged in error handling/message
            }
}