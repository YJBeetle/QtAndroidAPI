#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class MenuInflater : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MenuInflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MenuInflater(QAndroidJniObject obj);
		
		// Constructors
		MenuInflater(android::content::Context arg0);
		
		// Methods
		void inflate(jint arg0, JObject arg1) const;
	};
} // namespace android::view

