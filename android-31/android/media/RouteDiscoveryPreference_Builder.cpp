#include "./RouteDiscoveryPreference.hpp"
#include "./RouteDiscoveryPreference_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(android::media::RouteDiscoveryPreference arg0)
		: JObject(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object()
		) {}
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(JObject arg0, jboolean arg1)
		: JObject(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Ljava/util/List;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::media::RouteDiscoveryPreference RouteDiscoveryPreference_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RouteDiscoveryPreference;"
		);
	}
	android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setPreferredFeatures(JObject arg0) const
	{
		return callObjectMethod(
			"setPreferredFeatures",
			"(Ljava/util/List;)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0.object()
		);
	}
	android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setShouldPerformActiveScan(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldPerformActiveScan",
			"(Z)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0
		);
	}
} // namespace android::media

