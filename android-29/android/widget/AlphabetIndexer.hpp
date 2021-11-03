#pragma once

#include "../../JObject.hpp"
#include "../database/DataSetObserver.hpp"


namespace android::widget
{
	class AlphabetIndexer : public android::database::DataSetObserver
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabetIndexer(const char *className, const char *sig, Ts...agv) : android::database::DataSetObserver(className, sig, std::forward<Ts>(agv)...) {}
		AlphabetIndexer(QAndroidJniObject obj);
		
		// Constructors
		AlphabetIndexer(JObject arg0, jint arg1, jstring arg2);
		
		// Methods
		jint getPositionForSection(jint arg0);
		jint getSectionForPosition(jint arg0);
		jobjectArray getSections();
		void onChanged();
		void onInvalidated();
		void setCursor(JObject arg0);
	};
} // namespace android::widget

