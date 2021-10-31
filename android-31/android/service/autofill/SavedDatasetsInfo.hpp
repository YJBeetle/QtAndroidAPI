#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class SavedDatasetsInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring TYPE_OTHER();
		static jstring TYPE_PASSWORDS();
		
		// QJniObject forward
		template<typename ...Ts> explicit SavedDatasetsInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SavedDatasetsInfo(QJniObject obj);
		
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

