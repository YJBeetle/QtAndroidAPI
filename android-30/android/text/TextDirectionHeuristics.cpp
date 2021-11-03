#include "./TextDirectionHeuristics.hpp"

namespace android::text
{
	// Fields
	JObject TextDirectionHeuristics::ANYRTL_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"ANYRTL_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	JObject TextDirectionHeuristics::FIRSTSTRONG_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	JObject TextDirectionHeuristics::FIRSTSTRONG_RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	JObject TextDirectionHeuristics::LOCALE()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LOCALE",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	JObject TextDirectionHeuristics::LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	JObject TextDirectionHeuristics::RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	
	// QAndroidJniObject forward
	TextDirectionHeuristics::TextDirectionHeuristics(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextDirectionHeuristics::TextDirectionHeuristics()
		: JObject(
			"android.text.TextDirectionHeuristics",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

