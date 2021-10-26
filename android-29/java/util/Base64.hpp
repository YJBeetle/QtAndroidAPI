#pragma once

#ifndef JAVA_UTIL_BASE64
#define JAVA_UTIL_BASE64

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Base64_Decoder;
}
namespace __jni_impl::java::util
{
	class Base64_Encoder;
}

namespace __jni_impl::java::util
{
	class Base64 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getMimeDecoder();
		static QAndroidJniObject getEncoder();
		static QAndroidJniObject getUrlEncoder();
		static QAndroidJniObject getMimeEncoder(jint arg0, jbyteArray arg1);
		static QAndroidJniObject getMimeEncoder();
		static QAndroidJniObject getDecoder();
		static QAndroidJniObject getUrlDecoder();
	};
} // namespace __jni_impl::java::util

#include "Base64_Decoder.hpp"
#include "Base64_Encoder.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Base64::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Base64",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Base64::getMimeDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getMimeDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	QAndroidJniObject Base64::getEncoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	QAndroidJniObject Base64::getUrlEncoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getUrlEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	QAndroidJniObject Base64::getMimeEncoder(jint arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"(I[B)Ljava/util/Base64$Encoder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Base64::getMimeEncoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	QAndroidJniObject Base64::getDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	QAndroidJniObject Base64::getUrlDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getUrlDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Base64 : public __jni_impl::java::util::Base64
	{
	public:
		Base64(QAndroidJniObject obj) { __thiz = obj; }
		Base64()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_BASE64

