#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class Edits_Iterator : public __JniBaseClass
	{
	public:
		// Fields
		
		Edits_Iterator(QAndroidJniObject obj);
		// Constructors
		Edits_Iterator() = default;
		
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

