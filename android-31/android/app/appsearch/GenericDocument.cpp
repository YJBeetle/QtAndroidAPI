#include "../../../JByteArray.hpp"
#include "../../../JDoubleArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./GenericDocument.hpp"

namespace android::app::appsearch
{
	// Fields
	
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
	jboolean GenericDocument::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong GenericDocument::getCreationTimestampMillis() const
	{
		return callMethod<jlong>(
			"getCreationTimestampMillis",
			"()J"
		);
	}
	JString GenericDocument::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString GenericDocument::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	JObject GenericDocument::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jboolean GenericDocument::getPropertyBoolean(JString arg0) const
	{
		return callMethod<jboolean>(
			"getPropertyBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JBooleanArray GenericDocument::getPropertyBooleanArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0.object<jstring>()
		);
	}
	JByteArray GenericDocument::getPropertyBytes(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBytes",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	JArray GenericDocument::getPropertyBytesArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBytesArray",
			"(Ljava/lang/String;)[[B",
			arg0.object<jstring>()
		);
	}
	android::app::appsearch::GenericDocument GenericDocument::getPropertyDocument(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDocument",
			"(Ljava/lang/String;)Landroid/app/appsearch/GenericDocument;",
			arg0.object<jstring>()
		);
	}
	JArray GenericDocument::getPropertyDocumentArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDocumentArray",
			"(Ljava/lang/String;)[Landroid/app/appsearch/GenericDocument;",
			arg0.object<jstring>()
		);
	}
	jdouble GenericDocument::getPropertyDouble(JString arg0) const
	{
		return callMethod<jdouble>(
			"getPropertyDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	JDoubleArray GenericDocument::getPropertyDoubleArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0.object<jstring>()
		);
	}
	jlong GenericDocument::getPropertyLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getPropertyLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	JLongArray GenericDocument::getPropertyLongArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyLongArray",
			"(Ljava/lang/String;)[J",
			arg0.object<jstring>()
		);
	}
	JObject GenericDocument::getPropertyNames() const
	{
		return callObjectMethod(
			"getPropertyNames",
			"()Ljava/util/Set;"
		);
	}
	JString GenericDocument::getPropertyString(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JArray GenericDocument::getPropertyStringArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString GenericDocument::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	jint GenericDocument::getScore() const
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	jlong GenericDocument::getTtlMillis() const
	{
		return callMethod<jlong>(
			"getTtlMillis",
			"()J"
		);
	}
	jint GenericDocument::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString GenericDocument::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

