#include "./WindowInsets_Side.hpp"

namespace android::view
{
	// Fields
	jint WindowInsets_Side::BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"BOTTOM"
		);
	}
	jint WindowInsets_Side::LEFT()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"LEFT"
		);
	}
	jint WindowInsets_Side::RIGHT()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"RIGHT"
		);
	}
	jint WindowInsets_Side::TOP()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"TOP"
		);
	}
	
	// QJniObject forward
	WindowInsets_Side::WindowInsets_Side(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowInsets_Side::all()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Side",
			"all",
			"()I"
		);
	}
} // namespace android::view

