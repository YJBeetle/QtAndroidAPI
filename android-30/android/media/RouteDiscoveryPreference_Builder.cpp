#include "./RouteDiscoveryPreference.hpp"
#include "./RouteDiscoveryPreference_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(android::media::RouteDiscoveryPreference arg0)
		: __JniBaseClass(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object()
		) {}
	RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(__JniBaseClass arg0, jboolean arg1)
		: __JniBaseClass(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Ljava/util/List;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::media::RouteDiscoveryPreference RouteDiscoveryPreference_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RouteDiscoveryPreference;"
		);
	}
	android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setPreferredFeatures(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setPreferredFeatures",
			"(Ljava/util/List;)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0.object()
		);
	}
	android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setShouldPerformActiveScan(jboolean arg0)
	{
		return callObjectMethod(
			"setShouldPerformActiveScan",
			"(Z)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0
		);
	}
} // namespace android::media

