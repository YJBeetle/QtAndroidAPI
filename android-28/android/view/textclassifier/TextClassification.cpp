#include "../../content/Intent.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TextClassification.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassification::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassification::TextClassification(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassification::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject TextClassification::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	jfloat TextClassification::getConfidenceScore(JString arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	JString TextClassification::getEntity(jint arg0)
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint TextClassification::getEntityCount()
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	android::graphics::drawable::Drawable TextClassification::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	JString TextClassification::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::content::Intent TextClassification::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JString TextClassification::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject TextClassification::getOnClickListener()
	{
		return callObjectMethod(
			"getOnClickListener",
			"()Landroid/view/View$OnClickListener;"
		);
	}
	JString TextClassification::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	JString TextClassification::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

