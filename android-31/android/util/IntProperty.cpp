#include "../../java/lang/Integer.hpp"
#include "./IntProperty.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	IntProperty::IntProperty(QJniObject obj) : android::util::Property(obj) {}
	
	// Constructors
	IntProperty::IntProperty(jstring arg0)
		: android::util::Property(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	void IntProperty::set(jobject arg0, java::lang::Integer arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Integer;)V",
			arg0,
			arg1.object()
		);
	}
	void IntProperty::set(jobject arg0, jobject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void IntProperty::setValue(jobject arg0, jint arg1)
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
} // namespace android::util

