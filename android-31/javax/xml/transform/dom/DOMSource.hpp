#pragma once

#include "../../../../JObject.hpp"


namespace javax::xml::transform::dom
{
	class DOMSource : public JObject
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DOMSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DOMSource(QAndroidJniObject obj);
		
		// Constructors
		DOMSource();
		DOMSource(JObject arg0);
		DOMSource(JObject arg0, jstring arg1);
		
		// Methods
		JObject getNode();
		jstring getSystemId();
		jboolean isEmpty();
		void setNode(JObject arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::dom

