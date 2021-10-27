#include "./Base64_Decoder.hpp"
#include "./Base64_Encoder.hpp"
#include "./Base64.hpp"

namespace java::util
{
	// Fields
	
	Base64::Base64(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Base64::getDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getDecoder",
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
	QAndroidJniObject Base64::getMimeDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getMimeDecoder",
			"()Ljava/util/Base64$Decoder;"
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
	QAndroidJniObject Base64::getUrlDecoder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Base64",
			"getUrlDecoder",
			"()Ljava/util/Base64$Decoder;"
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
} // namespace java::util

