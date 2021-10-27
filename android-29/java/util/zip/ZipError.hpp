#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Error.hpp"
#include "../../lang/VirtualMachineError.hpp"
#include "../../lang/InternalError.hpp"


namespace __jni_impl::java::util::zip
{
	class ZipError : public __jni_impl::java::lang::InternalError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::zip


namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void ZipError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipError : public __jni_impl::java::util::zip::ZipError
	{
	public:
		ZipError(QAndroidJniObject obj) { __thiz = obj; }
		ZipError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

