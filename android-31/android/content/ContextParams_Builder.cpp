#include "./AttributionSource.hpp"
#include "./ContextParams.hpp"
#include "../../JString.hpp"
#include "./ContextParams_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContextParams_Builder::ContextParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContextParams_Builder::ContextParams_Builder()
		: JObject(
			"android.content.ContextParams$Builder",
			"()V"
		) {}
	ContextParams_Builder::ContextParams_Builder(android::content::ContextParams arg0)
		: JObject(
			"android.content.ContextParams$Builder",
			"(Landroid/content/ContextParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::content::ContextParams ContextParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContextParams;"
		);
	}
	android::content::ContextParams_Builder ContextParams_Builder::setAttributionTag(JString arg0) const
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/ContextParams$Builder;",
			arg0.object<jstring>()
		);
	}
	android::content::ContextParams_Builder ContextParams_Builder::setNextAttributionSource(android::content::AttributionSource arg0) const
	{
		return callObjectMethod(
			"setNextAttributionSource",
			"(Landroid/content/AttributionSource;)Landroid/content/ContextParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::content

