#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/Double.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../java/lang/Long.hpp"
#include "../../java/lang/Short.hpp"
#include "./ContentValues.hpp"

namespace android::content
{
	// Fields
	JObject ContentValues::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentValues",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ContentValues::TAG()
	{
		return getStaticObjectField(
			"android.content.ContentValues",
			"TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContentValues::ContentValues(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentValues::ContentValues()
		: JObject(
			"android.content.ContentValues",
			"()V"
		) {}
	ContentValues::ContentValues(android::content::ContentValues &arg0)
		: JObject(
			"android.content.ContentValues",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		) {}
	ContentValues::ContentValues(jint arg0)
		: JObject(
			"android.content.ContentValues",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void ContentValues::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ContentValues::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint ContentValues::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentValues::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ContentValues::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	java::lang::Boolean ContentValues::getAsBoolean(jstring arg0)
	{
		return callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	java::lang::Byte ContentValues::getAsByte(jstring arg0)
	{
		return callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	jbyteArray ContentValues::getAsByteArray(jstring arg0)
	{
		return callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	java::lang::Double ContentValues::getAsDouble(jstring arg0)
	{
		return callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	java::lang::Float ContentValues::getAsFloat(jstring arg0)
	{
		return callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	java::lang::Integer ContentValues::getAsInteger(jstring arg0)
	{
		return callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0
		);
	}
	java::lang::Long ContentValues::getAsLong(jstring arg0)
	{
		return callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	java::lang::Short ContentValues::getAsShort(jstring arg0)
	{
		return callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	jstring ContentValues::getAsString(jstring arg0)
	{
		return callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint ContentValues::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ContentValues::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ContentValues::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::put(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Boolean arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Byte arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Double arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Float arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Integer arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Long arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Short arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentValues::put(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContentValues::putAll(android::content::ContentValues arg0)
	{
		callMethod<void>(
			"putAll",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		);
	}
	void ContentValues::putNull(jstring arg0)
	{
		callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ContentValues::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint ContentValues::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ContentValues::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject ContentValues::valueSet()
	{
		return callObjectMethod(
			"valueSet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

