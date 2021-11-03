#include "./AttributionSource.hpp"
#include "../../JString.hpp"
#include "./AttributionSource_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	AttributionSource_Builder::AttributionSource_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AttributionSource_Builder::AttributionSource_Builder(jint arg0)
		: JObject(
			"android.content.AttributionSource$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::content::AttributionSource AttributionSource_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/AttributionSource;"
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setAttributionTag(JString arg0)
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0.object<jstring>()
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setNext(android::content::AttributionSource arg0)
	{
		return callObjectMethod(
			"setNext",
			"(Landroid/content/AttributionSource;)Landroid/content/AttributionSource$Builder;",
			arg0.object()
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setPackageName(JString arg0)
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content

