#pragma once

#include "./TextDirectionHeuristics.def.hpp"

namespace android::text
{
	// Fields
	inline JObject TextDirectionHeuristics::ANYRTL_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"ANYRTL_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline JObject TextDirectionHeuristics::FIRSTSTRONG_LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline JObject TextDirectionHeuristics::FIRSTSTRONG_RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline JObject TextDirectionHeuristics::LOCALE()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LOCALE",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline JObject TextDirectionHeuristics::LTR()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline JObject TextDirectionHeuristics::RTL()
	{
		return getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	
	// Constructors
	inline TextDirectionHeuristics::TextDirectionHeuristics()
		: JObject(
			"android.text.TextDirectionHeuristics",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

// Base class headers

