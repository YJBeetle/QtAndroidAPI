#pragma once

#include "../../../JObject.hpp"

namespace android::content::om
{
	class OverlayManagerTransaction;
}
class JString;

namespace android::content::om
{
	class OverlayManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OverlayManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OverlayManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void commit(android::content::om::OverlayManagerTransaction arg0) const;
		JObject getOverlayInfosForTarget(JString arg0) const;
	};
} // namespace android::content::om

