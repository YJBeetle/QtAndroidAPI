#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::textclassifier::TextClassifier_EntityConfig create(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static android::view::textclassifier::TextClassifier_EntityConfig createWithExplicitEntityList(__JniBaseClass arg0);
		static android::view::textclassifier::TextClassifier_EntityConfig createWithHints(__JniBaseClass arg0);
		jint describeContents();
		__JniBaseClass getHints();
		__JniBaseClass resolveEntityListModifications(__JniBaseClass arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

