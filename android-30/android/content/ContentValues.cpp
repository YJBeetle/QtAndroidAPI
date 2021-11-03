#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/Double.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../java/lang/Long.hpp"
#include "../../JObject.hpp"
#include "../../java/lang/Short.hpp"
#include "../../JString.hpp"
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
	JString ContentValues::TAG()
	{
		return getStaticObjectField(
			"android.content.ContentValues",
			"TAG",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContentValues::ContentValues(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void ContentValues::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ContentValues::containsKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint ContentValues::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentValues::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ContentValues::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	java::lang::Boolean ContentValues::getAsBoolean(JString arg0) const
	{
		return callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0.object<jstring>()
		);
	}
	java::lang::Byte ContentValues::getAsByte(JString arg0) const
	{
		return callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0.object<jstring>()
		);
	}
	JByteArray ContentValues::getAsByteArray(JString arg0) const
	{
		return callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	java::lang::Double ContentValues::getAsDouble(JString arg0) const
	{
		return callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0.object<jstring>()
		);
	}
	java::lang::Float ContentValues::getAsFloat(JString arg0) const
	{
		return callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0.object<jstring>()
		);
	}
	java::lang::Integer ContentValues::getAsInteger(JString arg0) const
	{
		return callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	java::lang::Long ContentValues::getAsLong(JString arg0) const
	{
		return callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0.object<jstring>()
		);
	}
	java::lang::Short ContentValues::getAsShort(JString arg0) const
	{
		return callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0.object<jstring>()
		);
	}
	JString ContentValues::getAsString(JString arg0) const
	{
		return callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint ContentValues::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ContentValues::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ContentValues::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::put(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Boolean arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Byte arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Double arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Float arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Integer arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Long arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, java::lang::Short arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ContentValues::put(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void ContentValues::putAll(android::content::ContentValues arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		);
	}
	void ContentValues::putNull(JString arg0) const
	{
		callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ContentValues::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jint ContentValues::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString ContentValues::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ContentValues::valueSet() const
	{
		return callObjectMethod(
			"valueSet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

