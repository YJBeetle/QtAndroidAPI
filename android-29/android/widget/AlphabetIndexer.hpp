#pragma once

#include "../../__JniBaseClass.hpp"
#include "../database/DataSetObserver.hpp"


namespace android::widget
{
	class AlphabetIndexer : public android::database::DataSetObserver
	{
	public:
		// Fields
		
		AlphabetIndexer(QAndroidJniObject obj);
		// Constructors
		AlphabetIndexer(__JniBaseClass arg0, jint arg1, jstring arg2);
		AlphabetIndexer() = default;
		
		// Methods
		jint getPositionForSection(jint arg0);
		jint getSectionForPosition(jint arg0);
		jobjectArray getSections();
		void onChanged();
		void onInvalidated();
		void setCursor(__JniBaseClass arg0);
	};
} // namespace android::widget

