#include "../../java/lang/Integer.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IntProperty.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	IntProperty::IntProperty(JString arg0)
		: android::util::Property(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void IntProperty::set(JObject arg0, java::lang::Integer arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Integer;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	void IntProperty::set(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void IntProperty::setValue(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
} // namespace android::util

