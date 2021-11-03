#pragma once

#include "../database/DataSetObserver.hpp"

class JObjectArray;
class JString;
class JString;

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
		AlphabetIndexer(JObject arg0, jint arg1, JString arg2);
		
		// Methods
		jint getPositionForSection(jint arg0) const;
		jint getSectionForPosition(jint arg0) const;
		JObjectArray getSections() const;
		void onChanged() const;
		void onInvalidated() const;
		void setCursor(JObject arg0) const;
	};
} // namespace android::widget

