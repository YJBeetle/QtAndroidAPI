#include "../../content/Intent.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassification.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextClassification::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassification::TextClassification(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassification::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass TextClassification::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	jfloat TextClassification::getConfidenceScore(jstring arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jstring TextClassification::getEntity(jint arg0)
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint TextClassification::getEntityCount()
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	android::os::Bundle TextClassification::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::graphics::drawable::Drawable TextClassification::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring TextClassification::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::Intent TextClassification::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring TextClassification::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	__JniBaseClass TextClassification::getOnClickListener()
	{
		return callObjectMethod(
			"getOnClickListener",
			"()Landroid/view/View$OnClickListener;"
		);
	}
	jstring TextClassification::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassification::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextClassification::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

