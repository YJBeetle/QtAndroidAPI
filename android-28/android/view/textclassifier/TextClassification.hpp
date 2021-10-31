#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassification : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		__JniBaseClass getActions();
		jfloat getConfidenceScore(jstring arg0);
		jstring getEntity(jint arg0);
		jint getEntityCount();
		android::graphics::drawable::Drawable getIcon();
		jstring getId();
		android::content::Intent getIntent();
		jstring getLabel();
		__JniBaseClass getOnClickListener();
		jstring getText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

