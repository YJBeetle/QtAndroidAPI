#include "./TextDirectionHeuristics.hpp"

namespace android::text
{
	// Fields
	QAndroidJniObject TextDirectionHeuristics::ANYRTL_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"ANYRTL_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::FIRSTSTRONG_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::FIRSTSTRONG_RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LOCALE",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	
	// QAndroidJniObject forward
	TextDirectionHeuristics::TextDirectionHeuristics(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextDirectionHeuristics::TextDirectionHeuristics()
		: __JniBaseClass(
			"android.text.TextDirectionHeuristics",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

