#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::zip
{
	class DataFormatException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::zip


namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void DataFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DataFormatException",
			"()V"
		);
	}
	void DataFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataFormatException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class DataFormatException : public __jni_impl::java::util::zip::DataFormatException
	{
	public:
		DataFormatException(QAndroidJniObject obj) { __thiz = obj; }
		DataFormatException()
		{
			__constructor();
		}
		DataFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

