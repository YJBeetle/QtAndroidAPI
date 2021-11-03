#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./TracingConfig.hpp"
#include "./TracingConfig_Builder.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	TracingConfig_Builder::TracingConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TracingConfig_Builder::TracingConfig_Builder()
		: JObject(
			"android.webkit.TracingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JIntArray arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"([I)Landroid/webkit/TracingConfig$Builder;",
			arg0.object<jintArray>()
		);
	}
	android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JArray arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"([Ljava/lang/String;)Landroid/webkit/TracingConfig$Builder;",
			arg0.object<jarray>()
		);
	}
	android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JObject arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"(Ljava/util/Collection;)Landroid/webkit/TracingConfig$Builder;",
			arg0.object()
		);
	}
	android::webkit::TracingConfig TracingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/webkit/TracingConfig;"
		);
	}
	android::webkit::TracingConfig_Builder TracingConfig_Builder::setTracingMode(jint arg0) const
	{
		return callObjectMethod(
			"setTracingMode",
			"(I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
} // namespace android::webkit

