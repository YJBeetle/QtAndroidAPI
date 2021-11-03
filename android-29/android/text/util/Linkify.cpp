#include "../../widget/TextView.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./Linkify.hpp"

namespace android::text::util
{
	// Fields
	jint Linkify::ALL()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"ALL"
		);
	}
	jint Linkify::EMAIL_ADDRESSES()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"EMAIL_ADDRESSES"
		);
	}
	jint Linkify::MAP_ADDRESSES()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"MAP_ADDRESSES"
		);
	}
	jint Linkify::PHONE_NUMBERS()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"PHONE_NUMBERS"
		);
	}
	jint Linkify::WEB_URLS()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"WEB_URLS"
		);
	}
	JObject Linkify::sPhoneNumberMatchFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;"
		);
	}
	JObject Linkify::sPhoneNumberTransformFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberTransformFilter",
			"Landroid/text/util/Linkify$TransformFilter;"
		);
	}
	JObject Linkify::sUrlMatchFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sUrlMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;"
		);
	}
	
	// QAndroidJniObject forward
	Linkify::Linkify(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Linkify::Linkify()
		: JObject(
			"android.text.util.Linkify",
			"()V"
		) {}
	
	// Methods
	jboolean Linkify::addLinks(JObject arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Linkify::addLinks(android::widget::TextView arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Linkify::addLinks(JObject arg0, jint arg1, JObject arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;ILjava/util/function/Function;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, jstring arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, jstring arg2, JObject arg3, JObject arg4)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, jstring arg2, jarray arg3, JObject arg4, JObject arg5)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, jstring arg2, jarray arg3, JObject arg4, JObject arg5, JObject arg6)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;Ljava/util/function/Function;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2, JObject arg3, JObject arg4)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2, jarray arg3, JObject arg4, JObject arg5)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::text::util

