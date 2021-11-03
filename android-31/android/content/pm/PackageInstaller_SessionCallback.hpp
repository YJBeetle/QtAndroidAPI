#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageInstaller_SessionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionCallback(QJniObject obj);
		
		// Constructors
		PackageInstaller_SessionCallback();
		
		// Methods
		void onActiveChanged(jint arg0, jboolean arg1);
		void onBadgingChanged(jint arg0);
		void onCreated(jint arg0);
		void onFinished(jint arg0, jboolean arg1);
		void onProgressChanged(jint arg0, jfloat arg1);
	};
} // namespace android::content::pm

