#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::drm
{
	class DrmInfoRequest : public JObject
	{
	public:
		// Fields
		static JString ACCOUNT_ID();
		static JString SUBSCRIPTION_ID();
		static jint TYPE_REGISTRATION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO();
		static jint TYPE_UNREGISTRATION_INFO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfoRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfoRequest(QAndroidJniObject obj);
		
		// Constructors
		DrmInfoRequest(jint arg0, JString arg1);
		
		// Methods
		JObject get(JString arg0) const;
		jint getInfoType() const;
		JString getMimeType() const;
		JObject iterator() const;
		JObject keyIterator() const;
		void put(JString arg0, JObject arg1) const;
	};
} // namespace android::drm

