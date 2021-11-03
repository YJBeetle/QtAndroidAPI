#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class Properties;
}

namespace javax::xml::transform
{
	class Transformer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transformer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transformer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clearParameters();
		JObject getErrorListener();
		java::util::Properties getOutputProperties();
		jstring getOutputProperty(jstring arg0);
		jobject getParameter(jstring arg0);
		JObject getURIResolver();
		void reset();
		void setErrorListener(JObject arg0);
		void setOutputProperties(java::util::Properties arg0);
		void setOutputProperty(jstring arg0, jstring arg1);
		void setParameter(jstring arg0, jobject arg1);
		void setURIResolver(JObject arg0);
		void transform(JObject arg0, JObject arg1);
	};
} // namespace javax::xml::transform

