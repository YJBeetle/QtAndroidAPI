#pragma once

#include "../../../JObject.hpp"


namespace android::service::autofill
{
	class SavedDatasetsInfo : public JObject
	{
	public:
		// Fields
		static jstring TYPE_OTHER();
		static jstring TYPE_PASSWORDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SavedDatasetsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SavedDatasetsInfo(QAndroidJniObject obj);
		
		// Constructors
		SavedDatasetsInfo(jstring arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getCount();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace android::service::autofill

