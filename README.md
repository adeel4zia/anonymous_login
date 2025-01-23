Anonymous Login Module Ported to Backdrop CMS

-------------------------------------------------------------------------------
Anonymous Login for Backdrop 1.x
-------------------------------------------------------------------------------


**DESCRIPTION:**

This lightweight, user-friendly module ensures a seamless experience by redirecting anonymous users to the login page whenever they access admin-specified page paths. 
After logging in successfully, they are conveniently redirected back to their originally requested page.

-------------------------------------------------------------------------------

INSTALLATION:
* Put the module in your backdrop modules directory and enable it in 
  admin/modules. 

After enabling the module, navigate to the admin settings page  /admin/config/system/anonymous-login . 

You can then enter a list of page paths (wildcards [*] are supported), which will redirect anonymous users to the login page when visited. 

Also supported are patterns for which paths will be ignored.
To exclude some paths for a multilingual site you can use wildcards [*]:


<code>
~/*/user/register
~/*/user/password
</code>

-----------------------------------------------------------------------------
CREDIT
-----------------------------------------------------------------------------
Ported to Backdrop CMS by - [Adeel Ahmed](https://github.com/adeel4zia)

Github:   [Adeel4zia](https://github.com/adeel4zia)

Twitter|X: [Adeel Ahmed](https://x.com/adeel4zia)

Linkedin:  [Adeel Ahmed](https://www.linkedin.com/in/adeel4zia)

Original:  [Drupal 7 module](https://www.drupal.org/project/anonymous_login)
 
For professional support and development services contact adeel4zia@gmail.com.
