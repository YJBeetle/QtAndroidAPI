#pragma once

#include "../../__JniBaseClass.hpp"
#include "../database/DataSetObserver.hpp"


namespace android::widget
{
	class AlphabetIndexer : public android::database::DataSetObserver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlphabetIndexer(const char *className, const char *sig, Ts...agv) : android::database::DataSetObserver(className, sig, std::forward<Ts>(agv)...) {}
		AlphabetIndexer(QJniObject obj);
		
		// Constructors
		AlphabetIndexer(__JniBaseClass arg0, jint arg1, jstring arg2);
		
		// Methods
		jint getPositionForSection(jint arg0);
		jint getSectionForPosition(jint arg0);
		jobjectArray getSections();
		void onChanged();
		void onInvalidated();
		void setCursor(__JniBaseClass arg0);
	};
} // namespace android::widget

