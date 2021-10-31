#include "./TextDirectionHeuristics.hpp"

namespace android::text
{
	// Fields
	__JniBaseClass TextDirectionHeuristics::ANYRTL_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"ANYRTL_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	__JniBaseClass TextDirectionHeuristics::FIRSTSTRONG_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	__JniBaseClass TextDirectionHeuristics::FIRSTSTRONG_RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	__JniBaseClass TextDirectionHeuristics::LOCALE()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LOCALE",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	__JniBaseClass TextDirectionHeuristics::LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	__JniBaseClass TextDirectionHeuristics::RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	
	// QJniObject forward
	TextDirectionHeuristics::TextDirectionHeuristics(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextDirectionHeuristics::TextDirectionHeuristics()
		: __JniBaseClass(
			"android.text.TextDirectionHeuristics",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

