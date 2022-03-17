#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JDoubleArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./GenericDocument.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint GenericDocument::getMaxIndexedProperties()
	{
		return callStaticMethod<jint>(
			"android.app.appsearch.GenericDocument",
			"getMaxIndexedProperties",
			"()I"
		);
	}
	inline jboolean GenericDocument::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong GenericDocument::getCreationTimestampMillis() const
	{
		return callMethod<jlong>(
			"getCreationTimestampMillis",
			"()J"
		);
	}
	inline JString GenericDocument::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString GenericDocument::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline JObject GenericDocument::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jboolean GenericDocument::getPropertyBoolean(JString arg0) const
	{
		return callMethod<jboolean>(
			"getPropertyBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JBooleanArray GenericDocument::getPropertyBooleanArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0.object<jstring>()
		);
	}
	inline JByteArray GenericDocument::getPropertyBytes(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBytes",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline JArray GenericDocument::getPropertyBytesArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyBytesArray",
			"(Ljava/lang/String;)[[B",
			arg0.object<jstring>()
		);
	}
	inline android::app::appsearch::GenericDocument GenericDocument::getPropertyDocument(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDocument",
			"(Ljava/lang/String;)Landroid/app/appsearch/GenericDocument;",
			arg0.object<jstring>()
		);
	}
	inline JArray GenericDocument::getPropertyDocumentArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDocumentArray",
			"(Ljava/lang/String;)[Landroid/app/appsearch/GenericDocument;",
			arg0.object<jstring>()
		);
	}
	inline jdouble GenericDocument::getPropertyDouble(JString arg0) const
	{
		return callMethod<jdouble>(
			"getPropertyDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline JDoubleArray GenericDocument::getPropertyDoubleArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0.object<jstring>()
		);
	}
	inline jlong GenericDocument::getPropertyLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getPropertyLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline JLongArray GenericDocument::getPropertyLongArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyLongArray",
			"(Ljava/lang/String;)[J",
			arg0.object<jstring>()
		);
	}
	inline JObject GenericDocument::getPropertyNames() const
	{
		return callObjectMethod(
			"getPropertyNames",
			"()Ljava/util/Set;"
		);
	}
	inline JString GenericDocument::getPropertyString(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JArray GenericDocument::getPropertyStringArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString GenericDocument::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint GenericDocument::getScore() const
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	inline jlong GenericDocument::getTtlMillis() const
	{
		return callMethod<jlong>(
			"getTtlMillis",
			"()J"
		);
	}
	inline jint GenericDocument::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GenericDocument::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

