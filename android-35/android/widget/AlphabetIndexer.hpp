#pragma once

#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AlphabetIndexer.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AlphabetIndexer::AlphabetIndexer(JObject arg0, jint arg1, JString arg2)
		: android::database::DataSetObserver(
			"android.widget.AlphabetIndexer",
			"(Landroid/database/Cursor;ILjava/lang/CharSequence;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint AlphabetIndexer::getPositionForSection(jint arg0) const
	{
		return callMethod<jint>(
			"getPositionForSection",
			"(I)I",
			arg0
		);
	}
	inline jint AlphabetIndexer::getSectionForPosition(jint arg0) const
	{
		return callMethod<jint>(
			"getSectionForPosition",
			"(I)I",
			arg0
		);
	}
	inline JObjectArray AlphabetIndexer::getSections() const
	{
		return callObjectMethod(
			"getSections",
			"()[Ljava/lang/Object;"
		);
	}
	inline void AlphabetIndexer::onChanged() const
	{
		callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	inline void AlphabetIndexer::onInvalidated() const
	{
		callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
	inline void AlphabetIndexer::setCursor(JObject arg0) const
	{
		callMethod<void>(
			"setCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../database/DataSetObserver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
