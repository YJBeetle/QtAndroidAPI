#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class Trace : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Trace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Trace(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void beginSection(jstring arg0);
		static void endSection();
	};
} // namespace android::os

