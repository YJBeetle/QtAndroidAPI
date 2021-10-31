#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class Edits_Iterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Edits_Iterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Edits_Iterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint destinationIndex();
		jint destinationIndexFromSourceIndex(jint arg0);
		jboolean findDestinationIndex(jint arg0);
		jboolean findSourceIndex(jint arg0);
		jboolean hasChange();
		jint newLength();
		jboolean next();
		jint oldLength();
		jint replacementIndex();
		jint sourceIndex();
		jint sourceIndexFromDestinationIndex(jint arg0);
		jstring toString();
	};
} // namespace android::icu::text

