#include "./SecureKeyImportUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"()V"
		);
	}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

