#include "./GenericDocument.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	GenericDocument::GenericDocument(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GenericDocument::getMaxIndexedProperties()
	{
		return callStaticMethod<jint>(
			"android.app.appsearch.GenericDocument",
			"getMaxIndexedProperties",
			"()I"
		);
	}
	jboolean GenericDocument::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong GenericDocument::getCreationTimestampMillis()
	{
		return callMethod<jlong>(
			"getCreationTimestampMillis",
			"()J"
		);
	}
	jstring GenericDocument::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring GenericDocument::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject GenericDocument::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean GenericDocument::getPropertyBoolean(jstring arg0)
	{
		return callMethod<jboolean>(
			"getPropertyBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jbooleanArray GenericDocument::getPropertyBooleanArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jbyteArray GenericDocument::getPropertyBytes(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyBytes",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jarray GenericDocument::getPropertyBytesArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyBytesArray",
			"(Ljava/lang/String;)[[B",
			arg0
		).object<jarray>();
	}
	android::app::appsearch::GenericDocument GenericDocument::getPropertyDocument(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyDocument",
			"(Ljava/lang/String;)Landroid/app/appsearch/GenericDocument;",
			arg0
		);
	}
	jarray GenericDocument::getPropertyDocumentArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyDocumentArray",
			"(Ljava/lang/String;)[Landroid/app/appsearch/GenericDocument;",
			arg0
		).object<jarray>();
	}
	jdouble GenericDocument::getPropertyDouble(jstring arg0)
	{
		return callMethod<jdouble>(
			"getPropertyDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdoubleArray GenericDocument::getPropertyDoubleArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
	jlong GenericDocument::getPropertyLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getPropertyLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlongArray GenericDocument::getPropertyLongArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyLongArray",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	JObject GenericDocument::getPropertyNames()
	{
		return callObjectMethod(
			"getPropertyNames",
			"()Ljava/util/Set;"
		);
	}
	jstring GenericDocument::getPropertyString(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray GenericDocument::getPropertyStringArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jstring GenericDocument::getSchemaType()
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GenericDocument::getScore()
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	jlong GenericDocument::getTtlMillis()
	{
		return callMethod<jlong>(
			"getTtlMillis",
			"()J"
		);
	}
	jint GenericDocument::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring GenericDocument::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

