#include "./LayoutDirection.hpp"

namespace android::util
{
	// Fields
	jint LayoutDirection::INHERIT()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"INHERIT"
		);
	}
	jint LayoutDirection::LOCALE()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"LOCALE"
		);
	}
	jint LayoutDirection::LTR()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"LTR"
		);
	}
	jint LayoutDirection::RTL()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"RTL"
		);
	}
	
	// QJniObject forward
	LayoutDirection::LayoutDirection(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

