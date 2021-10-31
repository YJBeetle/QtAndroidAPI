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
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifier_EntityConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifier_EntityConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject createWithExplicitEntityList(__JniBaseClass arg0);
		static QAndroidJniObject createWithHints(__JniBaseClass arg0);
		jint describeContents();
		QAndroidJniObject getHints();
		QAndroidJniObject resolveEntityListModifications(__JniBaseClass arg0);
		jboolean shouldIncludeTypesFromTextClassifier();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

