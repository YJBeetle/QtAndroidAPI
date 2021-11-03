#pragma once

#include "../../JObject.hpp"


namespace android::drm
{
	class DrmSupportInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmSupportInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmSupportInfo(QJniObject obj);
		
		// Constructors
		DrmSupportInfo();
		
		// Methods
		void addFileSuffix(jstring arg0);
		void addMimeType(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getDescriprition();
		jstring getDescription();
		JObject getFileSuffixIterator();
		JObject getMimeTypeIterator();
		jint hashCode();
		void setDescription(jstring arg0);
	};
} // namespace android::drm

