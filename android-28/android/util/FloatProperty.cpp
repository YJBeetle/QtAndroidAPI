#include "../../java/lang/Float.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./FloatProperty.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	FloatProperty::FloatProperty(QJniObject obj) : android::util::Property(obj) {}
	
	// Constructors
	FloatProperty::FloatProperty(JString arg0)
		: android::util::Property(
			"android.util.FloatProperty",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void FloatProperty::set(JObject arg0, java::lang::Float arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Float;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	void FloatProperty::set(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void FloatProperty::setValue(JObject arg0, jfloat arg1)
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;F)V",
			arg0.object<jobject>(),
			arg1
		);
	}
} // namespace android::util

