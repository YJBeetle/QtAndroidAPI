#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj);
		// Constructors
		PropertyReader_PropertyTypeMismatchException(jint &arg0, jstring &arg1, jstring &arg2);
		PropertyReader_PropertyTypeMismatchException(jint &arg0, const QString &arg1, const QString &arg2);
		PropertyReader_PropertyTypeMismatchException(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3);
		PropertyReader_PropertyTypeMismatchException(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		PropertyReader_PropertyTypeMismatchException() = default;
		
		// Methods
	};
} // namespace android::view::inspector

