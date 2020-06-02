#ifndef SSLKEYS_H
#define SSLKEYS_H

#include <string>

class SSLKeys
{
	static constexpr const unsigned char privateKeyArray[] =
	{
		#include "id_rsa.kartuli.h"
	};
	
	std::string privateKey;

	static constexpr const unsigned char certificateArray[] =
	{
		#include "id_rsa.kartuli.crt.h"
	};
	
	std::string certificate;

public :

	const std::string& getPrivateKey() const;

	const std::string& getCertificate() const;

	SSLKeys();
};

#endif // SSLKEYS_H

